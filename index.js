const Koa = require("koa")
const path = require("path")
const staticFiles = require("koa-static")

const app = new Koa()

app.use(staticFiles(path.join(__dirname+"/public")))

const router = require("koa-router")()

app.use(router.routes())
app.listen(3000)
